def factorial(n):
    if n <= 0:
        return 0
    else:
        
        if n == 1:
            return 1
    
        else:
            return (n * factorial(n-1))
        
number = 8
printf(number "factorial is" factorial(number))
        