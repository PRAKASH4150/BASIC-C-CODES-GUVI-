tring=input()
length=len(string)
array=[None]*length
minchar=string[0]
maxchar=string[0]
for i in range(0,length):
    array[i]=1
    for j in range(i+1,length):
        if(string[i]==string[j] and string[i]!='' and string[i]!='0'):
            array[i]=array[i]+1
            #string=string[ :j]+'0'+string[j+1: ];

Min=Max=array[0]
for i in range(0,length):
    if(Min>array[i] and array[i]!='0'):
        Min=array[i]
        minchar=string[i]
    if(Max<array[i]):
        Max=array[i]
        maxchar=string[i]
print(maxchar)
            
               
               
