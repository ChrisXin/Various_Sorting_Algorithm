template <typename Type>
void quicksort( Type *array, int first, int last ) {
    
       // using insertion sort when list size is small
    if ( last - first <= N ) {
        insertion_sort( array, first, last );
        
        
    } else {
        //Choose the median of the first, middle, and last entries in the list (Median helps speed the algorithm)
        Type pivot = find_pivot( array, first, last );
        
        //Searching forward and backward:
        
        // low is index
        // Find the next element greater than the pivot (from the start of the array)
        int low  =  find_next( pivot, array, first + 1 );
        
        // Find the last element less than the pivot ((from the end of the array))
        int high = find_previous( pivot, array,  last - 1 );

        //  swap array[low] and array[high] 
        //    in order to make left elements are smaller than Pivot, right elements are greater than Pivot
        while ( low < high ) {
            std::swap( array[low], array[high] );
            low  =     find_next( pivot, array,  low + 1 );
            high = find_previous( pivot, array, high - 1 );
        }

        // program reaches this point when low > high
        //put array[low] to the end of the array
        array[last – 1] = array[low];
        // put the pivot between elements smaller than it and elements greater than it
        array[low] = pivot;
        
        //calling quicksort recursively on the first half
        quicksort( array, first,  low );
        
        //calling quicksort recursively on the first half
        quicksort( array,  high, last );
    }
}
