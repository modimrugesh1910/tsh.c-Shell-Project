#
# trace11.txt - Forward SIGINT to every process in foreground process group
#
/bin/echo -e tsh> ./mysplit 4
./mysplit 4 

SLEEP 2
INT

/bin/echo tsh> /bin/ps a
/bin/ps a
