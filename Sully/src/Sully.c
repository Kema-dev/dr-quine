#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define fun main
#define nb 5
int fun(a){if(nb>0){char name[10]="Sully_X.c";name[6]='0'+nb-1;dprintf(open(name,O_WRONLY|O_CREAT|O_TRUNC,0644),a="#include<stdio.h>%c#include<fcntl.h>%c#include<unistd.h>%c#define fun main%c#define nb %c%cint fun(a){if(nb>0){char name[10]=%cSully_X.c%c;name[6]='0'+nb-1;dprintf(open(name,O_WRONLY|O_CREAT|O_TRUNC,0644),a=%c%s%c,10,10,10,10,'0'+nb-1,10,34,34,34,a,34);char*tab1[5]={'gcc', name, '-o', 'Sully.out'};char*tab2[2]={'./Sully.out'};execve(tab1[0], tab1, NULL);execve(tab2[0], tab2, NULL);}}",10,10,10,10,'0'+nb-1,10,34,34,34,a,34);char*tab1[5]={'gcc', name, '-o', 'Sully.out'};char*tab2[2]={'./Sully.out'};execve(tab1[0], tab1, NULL);execve(tab2[0], tab2, NULL);}}