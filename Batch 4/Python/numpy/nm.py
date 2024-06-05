import numpy as np
arr = np.array([[10,20,30,40], [50,60,70,80], [11,22,33,44],[50,60,70,80]])
print(arr)
print(f"Dimensions of this array :-> {np.shape(arr)}") 
print(f"size of this array (number of elements in total) :-<< {np.size(arr)}") 
print(f"number of nested values / outer arrays :-<< {len(arr)}")
print(type(arr))
print(f"Dimensions of this array ->>>  {np.ndim(arr)}")
print(arr.dtype)