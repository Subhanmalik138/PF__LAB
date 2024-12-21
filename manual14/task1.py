
def areaofcoutry(nameofcoutry,area):
    x=(area/148940000)*100
    return x
    
name=input("ENTER NAME OF COUNTRY :")
area=float(input("ENTER AREA OF COUTRY :"))
print("AREA OF ",name,areaofcoutry(name,area))