sample_array=[0,1,0,1,1,1,1,0]
temp=0
pointer_2=0
for i in 0..sample_array.size
	if sample_array[i]==0
		temp=sample_array[pointer_2]
		sample_array[pointer_2]=sample_array[i]
		sample_array[i]=temp
		pointer_2=pointer_2+1
	end
end
puts sample_array


