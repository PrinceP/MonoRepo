program_name="$1"

#Test deletion
rm -rf test/$program_name

#Lib deletion
rm -rf src/lib/$program_name

#Main deletion
rm -rf src/main/$program_name