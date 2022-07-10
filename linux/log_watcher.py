"""
Log-Watcher
"""

import ubuntu
import time
import subprocess
from optparse import OptionParser

commands_to_run = [ ['ls'],
                    ['ps']
                  ]

def readlines_and_tail(file_input):
    while True:
        line = file_input.readline()
        if line:
            yield line
        else:
            tail(file_input)

def tail(file_input):
    while True:
        where = file_input.tell()
        line = file_input.readline()
        if not line:
            time.sleep(1.0)
            file_input.seek(where)
        else:
            yield line

def main():
    p = OptionParser()
    options, args = p.parse_args()
    if len(args) < 1:
        p.error("You must specify a file to watch??")

    # Tailing the file and looking for the string of interest
    with open(args[0], 'r') as file_input:
        for line in readlines_and_tail(file_input):
            #print(line.strip())
            if args[1] in line.strip():
                #print(line.strip())
                print("Found the string !!! - Need to execute commands")
                break

    # Executing commands after finding the string
    print("Executing the commands to fetch the debug O/P")
    time_string = time.strftime("%Y-%m-%d::%H:%M:%S")
    output_file = 'output-' + time_string + '.txt'
    with open(output_file, 'a') as fout:
        for i,c in enumerate(commands_to_run):
            string_command = ' '.join(d for d in c)
            fout.write(string_command)
            #result = subprocess.run(c, stdout=subprocess.PIPE)
            result = subprocess.check_output(c)
            #print("The O/P is", result.stdout)
            fout.writelines(str(result))


if __name__ == '__main__':
    main()
