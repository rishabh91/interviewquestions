def binary_search(a, target)
   lo = 0
    hi = a.size-1
   while lo <= hi
      mid = lo + (hi-lo)/2
      if a[mid] == target
         return mid            
      elsif a[mid] < target
         lo = mid+1
      else
         hi = mid-1
       end
    end
end

a = [1,3,5,6,8,9]

val = binary_search(a,1)
puts val+1
            