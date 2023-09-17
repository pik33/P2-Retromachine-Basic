5 'the program tests the put command, generating a file with one line Basic program in it.
10 open #2,"write","/sd/bas/puttest.bas"
20 poke $100000,asc("1"):poke $100001,asc("2")
30 poke $100002,asc(" "):poke $100003,asc("a")
40 poke $100004,asc("="):poke $100005,asc("1")
50 poke $100006,10
60 put #2,$100000,7,0
70 close #2
