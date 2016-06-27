
def count_occurances(string)
    occurances_hash= Hash.new 0
    for i in 0..string.length
        occurances_hash[string[i]]+=1
    end
    return occurances_hash
    
end
puts "Enter the string"
str=$stdin.gets.chomp
str=str.sort
resultant_hash=count_occurances(str)
#sample result = {"a"=>3, "b"=>3, "c"=>3, "d"=>1, nil=>1}
