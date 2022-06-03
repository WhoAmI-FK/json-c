#include <stdio.h>
#include <stdlib.h>
#include <json-c/json.h>

int main()
{
        const char filename[] = "sample1.json";
        json_object* jdata;
        const char* jstring;
        jdata = json_object_from_file(filename);
        if(jdata==NULL)
        {
                fprintf(stderr, "Unable to process %s\n",filename);
                exit(1);
        }
        jstring = json_object_to_json_string(jdata);
        puts(jstring);
/*      printf("File %s opened\n",filename); */
        return(0);
}