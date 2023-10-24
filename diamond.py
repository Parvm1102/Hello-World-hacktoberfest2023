#program to print a diamond shaped pattern based on the string inputted
a=input("enter the string")
print()
b=len(a)
c=" "
a1=":"
for i in range(0,b):
  d=(c*(b-i-1))+a[i]
  if(i>=1):
   d=(c*(b-i-1))+a[i]+(2*i-1)*a1+a[i]
  print(d)
for j in range(b-1,-1,-1):
  if(j>=1):
    d=(c*(b-1-j))+a[j]+(2*j-1)*a1+a[j]
  else:
    d=(c*(b-1-j))+a[j]
  print(d)
