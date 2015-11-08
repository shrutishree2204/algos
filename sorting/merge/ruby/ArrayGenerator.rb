class ArrayGenerator
	def initialize
	end

	def gen_array
		print "Enter the number of values to generate: "

		num = gets
		num = num.chomp!
		num = num.to_i

		array = Array.new

		num.times do
			array << rand(num)	
		end

		return array
	end
end
