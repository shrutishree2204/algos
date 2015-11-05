require './ArrayGenerator.rb'
require './MergeSorter.rb'

generator = ArrayGenerator.new
sorter = MergeSorter.new

array = generator.gen_array

sorter.merge_sort(array, 0, array.length - 1)

print "#{array}\n"
