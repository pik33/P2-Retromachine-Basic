asm shared
t         drvl #38 
p1        drvnot #38
          waitx ##340000000
          jmp #p1
end asm          

let cog=cpu(@t ,0)
