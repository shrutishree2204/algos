class MergeSorter
	def initialize
	end

	def merge_sort(array, start, stop)
		if (stop - start) < 2
			return
		end

		if start < stop
			mid = (start + stop) / 2
			merge_sort(array, start, mid)
			merge_sort(array, mid+1, stop)
			merge(array, start, mid, stop)
		end
	end

	def merge(array, start, mid, stop)
		n1 = mid - start + 1
		n2 = stop - mid

		array1 = Array.new
		array2 = Array.new

		for i in 0...n1 do
			array1 << array[i + start]
		end

		for i in 0...n2 do
			array2 << array[i + mid + 1]
		end

		i = 0
		j = 0 
		k = start
		while k <= stop do
			if array1[i] < array2[j]
				array[k] = array1[i]
				i = i + 1
			else
				array[k] = array2[j]
				j = j + 1
			end
			k = k + 1
		end
	end
end
