# when s is transcribed as amog then singular amogus 
# and the plural form is amogi 
# given transcribed amog'u in singular form - > convert it in plural form
# we just need to do two step
# step1 : remove us from given string 
# step 2 : add i to modified string 
for _ in range(int(input())):
    s = input()
    s = s[:-2] 
    print(s+"i")
    
