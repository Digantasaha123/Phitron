def kargs_example(name,**additional_info):
    no = f"{name}"
    print(additional_info)
    return no

ans = kargs_example('diganta', kaka =  'lo_jaiga')
print(ans)