class MergeSorter
	def initialize
	end

	def merge_sort(array, start, stop)
		if start < stop
			mid = (start + stop) / 2
			merge_sort(array, start, mid)
			merge_sort(array, mid+1, stop)
			merge(array, start, mid, stop)
		end
	end

	def merge(array, start, mid, stop)
		left_length = mid - start + 1
		right_length = stop - mid

		array1 = Array.new
		array2 = Array.new

		for i in 0...left_length do
			array1 << array[i + start]
		end

		for i in 0...right_length do
			array2 << array[i + mid + 1]
		end

		left = 0
		right = 0 
		k = start

		loop do
			break if left >= left_length and right >= right_length

			if right == right_length or (left < left_length and array1[left] < array2[right])
				array[k] = array1[left]
				left += 1
			else
				array[k] = array2[right]
				right += 1
			end
			k += 1
		end

	end
end
