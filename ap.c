j,a,d=input("Enter j, a and d").split(' ')
j,a,d=int(j),int(a),int(d)
ans=0
total=0
while j>=0:
total+=ans
ans+=d
j-=1
print(total)
