for _ in range(int(input())):
    #give an integer n process all integers from 0 to n 
    # check for each i if i % 3 ==  i % 5 print(fizzBuzz)
    
    count =0
    for i in range(int(input())+1):
        if( i % 3 == i % 5):
            count = count+1
        continue   
            
    print(count)