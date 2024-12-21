def over(num):
   
   if(num>6):
    ballscount=num%6
    remianingballs=ballscount/10
    remaingover=num-ballscount
    overs=remaingover/6
    totalovers=overs+remianingballs

    return totalovers
   else:
       overs=num/10
       return overs



numbersofball=int(input("ENTER NUMBER OF BALLS  :"))
print("OVERS IS : ",over(numbersofball))

    

