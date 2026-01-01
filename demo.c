#!/bin/bash

echo "Enter file name:"
read f1

echo "Enter reference file name:"
read f2

diff "$f1" "$f2" > /dev/null

if [ $? -eq 0 ]
then
    echo "File is NOT modified"
else
    echo "File IS modified"
fi
      GNU nano 7.2                       Dockerfile *                               
FROM httpd
COPY index.html /usr/local/apache2/htdocs/

