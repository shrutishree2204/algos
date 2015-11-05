class InsertionSorter
	def initialize
	end

	def insertionSort(array)
		array.length.times do |i|
			key = array[i]
			j = i - 1
			while j >= 0 and array[j] > key do
				array[j + 1] = array[j]
				j = j - 1	
			end
			array[j + 1] = key
		end
	end
end
