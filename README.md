[![CI](https://github.com/PrinceP/DS_Algo/actions/workflows/main.yml/badge.svg?branch=main)](https://github.com/PrinceP/DS_Algo/actions/workflows/main.yml)

# Bazel workflow

### Data Structures and Algo

| Programs               | Language | Bazel build  | Bazel test        | Remarks                                                                                                                                                                                                                                                                                                     |
| ---------------------- | -------- | ------------ | ----------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Greeting               | C++      | Greeting     | test\_Greeting     |                                                                                                                                                                                                                                                                                                             |
| Linear Search          | C++      | LinearSearch | test\_LinearSearch | Basic                                                                                                                                                                                                                                                                                                       |
| Binary Search          | C++      | BinarySearch | test\_BinarySearch | Basic,Optimized, MinOfRotatedArray, InfiniteArray Src:https://www.geeksforgeeks.org/the-ubiquitous-binary-search-set-1/, https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/, https://www.geeksforgeeks.org/given-sorted-array-number-x-find-pair-array-whose-sum-closest-x/ |
| Subarray Sum           | C++      | SubarraySum  | test\_SubarraySum  | Basic,Prefix,Kandane,https://www.geeksforgeeks.org/find-subarray-with-given-sum/                                                                                                                                                                                                                            |
| Rotation 1 Dimensional | C++      | Rotation1D   | test\_Rotation1D   | https://www.geeksforgeeks.org/print-array-after-it-is-right-rotated-k-times/                                                                                                                                                                                                                                |
| Sorting                | C++      | Sorting      | test\_Sorting      | Bubble, Insertion, Selection, https://www.geeksforgeeks.org/counting-sort/, Inbuilt-https://www.geeksforgeeks.org/sorting-vector-of-pairs-in-c-set-1-sort-by-first-and-second/, https://www.codechef.com/problems/TACHSTCK, MergeSort, QuickSort-D\&C                                                        |
| String                 | C++      | MyString     | test\_MyString     | Shortest route - cin from main, Count whitespaces, Compress, vowel, permute, decimal                                                                                                                                                                                                                        |
| Array 2-D              | C++      | ArrayTwoD    | test\_ArrayTwoD    | Spiral, Wave, Staircase, Pascal - https://www.geeksforgeeks.org/pascal-triangle/ ,https://www.geeksforgeeks.org/submatrix-sum-queries/ ,                                                                                                                                                                    |
| Pointers               | C++      | Pointer      | test\_Pointer      | Basics                                                                                                                                                                                                                                                                                                      |
| Vectors                | C++      | MyVector     | test\_MyVector     | Basics, Make zeros, Rotate matrix inplace                                                                                                                                                                                                                                                                   |
| Bit manipulation       | C++      | MyBit        | test\_MyBit        | Basics, Fast Exponential, XOR, Subset Sum Queries                                                                                                                                                                                                                                                           |
| Recursion              | C++      | Recursion    | test\_Recursion    | Occurrences, Increasing, fastPower, https://www.geeksforgeeks.org/tiling-problem/ ,https://www.geeksforgeeks.org/friends-pairing-problem/, https://www.techiedelight.com/find-n-digit-binary-strings-without-consecutive-1s/                                                                                 |
| Linked List            | C++      | LinkedList   | test\_LinkedList   | Reverse, Delete, Delete tail, Delete Klast                                                                                                                                                                                                                                                                  |
| Stacks                 | C++      | Stacks       | test\_Stacks       | Insert At bottom, reverse, StockSpan, https://www.geeksforgeeks.org/next-greater-element/ , https://www.geeksforgeeks.org/find-expression-duplicate-parenthesis-not/, https://www.geeksforgeeks.org/largest-rectangle-under-histogram/                                                                      |
| Queue                  | C++      | Queue        | test\_Queue        | Circular array, Stack using Queue, First Non-Repeating char, Alternate queue                                                                                                                                                                                                                                |
| BinaryTree             | C++      | BinaryTree   | test\_BinaryTree   | Preorder, Inorder, Postorder, Levelorder, ParseLevelOrder, height, KthLevel, Sum, Diameter, minDepth, isSymmetric, EvalTree, RemoveHalfNodes, Root\_to\_LeafPathSum                                                                                                                                           |
| BST                    | C++      | BST          | test\_BST          | Insert, Search, Delete, PrintRange, Print2Leaf, IsBST, DoMirror                                                                                                                                                                                                                                             |
| Heap                   | C++      | Heap         | test\_Heap         | Insert, Pop, NearestKObjects, kWeakestRows, minSetSize                                                                                                                                                                                                                                                      |
| Hashing                | C++      | Hashing      | test\_Hashing      | Insert, Search, \[] operator, Array intersection, KSumSubarray                                                                                                                                                                                                                                               |
| Tries                  | C++      | Tries        | test\_Tries        | Insert, Search                                                                                                                                                                                                                                                                                              |
| Graphs                 | C++      | Graphs       | test\_Graphs       | Insert, Print                                                                                                                                                                                                                                                                                               |

### OPENCV

| Programs      | Language | Bazel build                                  | Bazel test | Remarks |
| ------------- | -------- | -------------------------------------------- | ---------- | ------- |
| OpenCV\_Work   | C++      | OpenCV\_Work                                  | -          |         |
| PipeCounter   | Python   | bazel-bin/src/main/PipeCounter/counter       | -          |         |
| InPolygonTest | Python   | bazel-bin/src/main/InPolygonTest/polygontest | -          |         |

### Colabs

| Programs             | Language | Bazel build | Bazel test | Remarks                              |
| -------------------- | -------- | ----------- | ---------- | ------------------------------------ |
| Repnet Colab         | -        | -           | -          | src/colabs/repnet/repnet\_colab.ipynb |
| GAN Colabs           | -        | -           | -          | src/colabs/GAN                       |
| YOLO Colabs          | -        | -           | -          | src/colabs/Yolo                      |
| DL Frameworks Colabs | -        | -           | -          | src/colabs/assignments               |

## Commands to help

*   Generate a sample project work (BinarySearch) with test and main

```bash
sh generate_sample.sh BinarySearch
```

To clean the above mistake...

```bash
sh clean_sample.sh BinarySearch
```

*   Building and testing a specific program

```bash
bazel build  --cxxopt='-std=c++11'  //src/main/Greeting:main
```

*   Get output for a specific program

```bash
bazel-bin/src/main/Greeting/main
```

*   Get output for a test case

```bash
bazel test //test/Greeting:test_Greeting
```

*   Generate the build dependency graph

```bash
bazel query --notool_deps --noimplicit_deps "deps(//src/main/Greeting:main)" --output graph
```

*   Visualize the contents
    http://www.webgraphviz.com

***

*   Run the full build

```bash
bazel build //...
```

*   Run the full build test

```bash
bazel test //...
```
