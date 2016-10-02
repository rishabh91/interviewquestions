class Node
	attr_accessor :value,:next
	
	def initialize(val,next_in)
		@value = val 
		@next = next_in
	end
end

class Linkedlist
	def initialize(val)
		@head = Node.new(val,nil)
	end

	def add_in_end(val)
		current = @head 
		while current.next!=nil
			current = current.next
		end
		temp = Node.new(val,nil)
		current.next = temp
	end

	def print_list
		current = @head
		while current!=nil
			puts current.value
			current = current.next 
		end
	end
	def add_on_top(val)
		temp = Node.new(val,nil)
		current = @head
		temp.next = current
		@head = temp
	end
	def delete_top
		current = @head.next 
		@head = current
	end
end

ll = Linkedlist.new(1)
arr = [2,3,4,5,6,7,8,9]
arr.each do |val|
	ll.add_in_end(val)
end

ll.print_list
puts "adding on top"
ll.add_on_top(100)
ll.print_list
puts "delete top"
ll.delete_top
ll.print_list