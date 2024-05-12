str =  input()
temp  = 0
st = []
count = 0
for i in str:
    while i != 'R':
        temp+=1
    st.append(temp)
    temp = 0
    count+=1
print(count)