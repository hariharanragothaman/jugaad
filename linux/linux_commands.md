## SCP

Push from Local to remote

```
scp -r -P 2222 file.ext username@domain:~/ 
```

Download from remote to local

```
scp -r <username>@<ip-address>:<directory>/ ~/tmp/
```

## Grep

```
grep -rine -C 10 <filename>
```

## TAR

Tar a folder  

```
tar -czvf file.tar.gz <directory-name>
```

Un-Tar a folder

```
tar -xvf <tar-file>
```
