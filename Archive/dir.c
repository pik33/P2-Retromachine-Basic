//
// A very simple command line shell for the P2
// useful for copying files between host and SD card,
// for example.
// Copyright 2021-2023 Total Spectrum Software Inc.
// MIT Licensed, see LICENSE.txt for details.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <ctype.h>
#include <sys/stat.h>
#include <sys/vfs.h>

#ifndef PATH_MAX
#define PATH_MAX 256
#endif

int md(char *arg1){
      
return mkdir(arg1, 0755);
}

int rd(char *arg1) {
      
return rmdir(arg1);
}
