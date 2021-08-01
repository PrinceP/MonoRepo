program_name="$1"

#Test generation
mkdir -p test/$program_name
cp -r test/Greeting/* test/$program_name
mv test/$program_name/Greeting_test.cc test/$program_name/"$program_name"_test.cc
#TODO: MAC only..I think :S
sed -i '' -e "s/Greeting/$program_name/g" test/$program_name/"$program_name"_test.cc 
sed -i '' -e  "s/Greeting/$program_name/g" test/$program_name/BUILD


#Lib generation
mkdir -p src/lib/$program_name
cp -r src/lib/Greeting/* src/lib/$program_name
mv src/lib/$program_name/Greeting.cc src/lib/$program_name/"$program_name".cc 
mv src/lib/$program_name/Greeting.h src/lib/$program_name/"$program_name".h
#TODO: MAC only..I think :S
sed -i '' -e "s/Greeting/$program_name/g"  src/lib/$program_name/"$program_name".h
sed -i '' -e "s/Greeting/$program_name/g" src/lib/$program_name/"$program_name".cc
sed -i '' -e "s/Greeting/$program_name/g" src/lib/$program_name/BUILD


#Main generation
mkdir -p src/main/$program_name
cp -r src/main/Greeting/* src/main/$program_name
#TODO: MAC only..I think :S
sed -i '' -e "s/Greeting/$program_name/g" src/main/$program_name/main.cc
sed -i '' -e  "s/Greeting/$program_name/g" src/main/$program_name/BUILD

bazel build //...

bazel test //...
