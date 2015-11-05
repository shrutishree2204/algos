require './InsertionSorter.rb'
require './ArrayGenerator.rb'

generator = ArrayGenerator.new
sorter = InsertionSorter.new

array = generator.gen_array

print "#{array}\n"

sorter.insertionSort(array)

print "#{array}\n"
