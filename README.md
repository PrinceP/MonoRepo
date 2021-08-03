[![CI](https://github.com/PrinceP/DS_Algo/actions/workflows/main.yml/badge.svg?branch=main)](https://github.com/PrinceP/DS_Algo/actions/workflows/main.yml)

# Bazel workflow


| Programs |Language|Bazel build|Bazel test|Remarks|
| ------ | ------ | ------ |------ | ------ |
| Greeting | C++ | Greeting |test_Greeting||
| Linear Search | C++ | LinearSearch |test_LinearSearch|Basic|
| Binary Search | C++ | BinarySearch |test_BinarySearch|Basic,Optimized, MinOfRotatedArray, InfiniteArray Src:https://www.geeksforgeeks.org/the-ubiquitous-binary-search-set-1/, https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/|
| Subarray Sum | C++ | SubarraySum |test_SubarraySum|Basic,Prefix,Kandane|



## Commands to help

- Generate a sample project work (BinarySearch) with test and main

```bash
sh generate_sample.sh BinarySearch
```

To clean the above mistake...
```bash
sh clean_sample.sh BinarySearch
```



- Building and testing a specific program

```bash
bazel build  --cxxopt='-std=c++11'  //src/main/Greeting:main
```

- Get output for a specific program
```bash
bazel-bin/src/main/Greeting/main
```

- Get output for a test case
```bash
bazel test //test/Greeting:test_Greeting
```

- Generate the build dependency graph

```bash
bazel query --notool_deps --noimplicit_deps "deps(//src/main/Greeting:main)" --output graph
```
- Visualize the contents
http://www.webgraphviz.com

--------

- Run the full build

```bash
bazel build //...
```


- Run the full build test

```bash
bazel test //...
```

## License
[MIT](https://choosealicense.com/licenses/mit/)