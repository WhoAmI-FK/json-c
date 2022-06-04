#include <stdio.h>
#include <stdlib.h>
#include <json-c/json.h>

int main()
{
        const char filename[] = "sample1.json";
        const char object_name[] = "lastName";
        const char* value;
        json_object* jdata, *objname;
        jdata = json_object_from_file(filename);
        if(jdata==NULL)
        {
         fprintf(stderr, "Unablle to processs %s\n", filename);
         exit(1);
        }
        json_object_object_get_ex(jdata,object_name,&objname);
        value = json_object_get_string(objname);
        printf("%s's value is %s\n",object_name, value);

        return(0);
}