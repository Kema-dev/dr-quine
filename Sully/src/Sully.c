#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define fun main
#define nb 5
int fun(a){if(nb>0){char name[10]="Sully_X.c";name[6]='0'+nb-1;dprintf(open(name,O_WRONLY|O_CREAT|O_TRUNC,0644),a="#include<stdio.h>%c#include<fcntl.h>%c#include<unistd.h>%c#define fun main%c#define nb %c%cint fun(a){if(nb>0){char name[10]=%cSully_X.c%c;name[6]='0'+nb-1;dprintf(open(name,O_WRONLY|O_CREAT|O_TRUNC,0644),a=%c%s%c,10,10,10,10,'0'+nb-1,10,34,34,34,a,34,34,34,34,34,34,34,34,34);char compile[27];sprintf(compile, %cgcc -o Sully.out %s%c, name);system(compile);char run[12];sprintf(run, %c./Sully.out%c);system(run);}}",10,10,10,10,'0'+nb-1,10,34,34,34,a,34,34,34,34,34,34,34,34,34);char compile[27];sprintf(compile, "gcc -o Sully.out %s", name);system(compile);char run[12];sprintf(run, "./Sully.out");system(run);}}