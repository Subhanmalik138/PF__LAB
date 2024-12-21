def check(number):
    sum=0
    while(number!=0):
        sum = sum + number%10
        number = number//10
    if sum%2==0:
        result="Evenish"
    else:
        result="Oddish"
    return result
number = int(input("Enter a number: "))
result1 =  check(number)
print("Your number is: " + result1)           

