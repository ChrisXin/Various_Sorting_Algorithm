# Various_Sorting_Algorithm


Insertion_Sort:
         - Insert new entries into growing sorted lists
         
         - worst-case runtime: Q(n^2)     (Reverse sorted)
         - Average-case runtime: O(d + n)
         - Best-case runtime: Q(n)    (Very few inversions:  d = O(n))
         - Memory requirements:  Q(1)



Q(n ln(n)) Sorting Algorithm:


HeapSort:
         allows in-place sorting

MergeSort:
         is faster but requires more memory
         - Run-time: Q(nln(n)) (no Best Case and Worst Case)
         - Memeory: Q(log(n))
         
QuickSort:  
         - On average faster than heap sort or merge sort
         - Using the median of three pivots is a reasonably means of finding the pivot
         - Use a pivot in the array to divide the two sub array
         - Average-case run-time:	Q(n ln(n)) time 
         - Average-case Memory:        Q(ln(n)) memory 
         - Worst-case run-time:	Q(n^2) time (it happens when you pick the minimum element as pivot)
         - Worst-case Memory:          Q(n) memory  (it happens when you pick the minimum element as pivot)
      


