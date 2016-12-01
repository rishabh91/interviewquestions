def binary_search(a, target)
   lo = 0
    hi = a.size
   while lo <= hi
      mid = lo + (hi-lo)/2
      if a[mid] == target
         return mid            
      elsif a[mid] < target
         lo = mid
      else
         hi = mid
       end
    end
end

# Driver for the program 
   ab = [ ]
20.times do 
    ab <<(0..50).to_a[rand(50)] 
end
tar = ab[4]
puts tar
ab.sort!
puts ab

pos = binary_search(ab,tar)

puts "The element was found at #{pos}"
            
