mount "/sd", _vfs_open_sdcard()
chdir "/sd"

close #9: open "nonexistingfile" for input as #9
let err=geterr() : print err, strerror$(err) : close #9
let err=geterr() : print err, strerror$(err) 

chdir "/sd/bas"
let err=geterr() : print err, strerror$(err) 

close #9: open "mousetheremin.bas" for input as #9
let err=geterr() : print err, strerror$(err) : close #9

chdir "/sd"
let err=geterr() : print err, strerror$(err)
