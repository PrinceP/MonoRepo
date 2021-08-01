program_name="$1"
func_name="$2"

#Test generation
mkdir -p test/program_name
cp -r test/Greeting/* test/program_name
mv test/program_name/Greeting_test.cc test/program_name/program_name_test.cc 

#Lib generation
cp -r test/Greeting/* test/LinearSearch

#Main generation
cp -r test/Greeting/* test/LinearSearch

