#define SHELLSCRIPT "\
#!/data/data/com.termux/files/usr/bin/sh \n\
    pwd=$(pwd) \n\
    function initProject { \n\
    echo -n 'Enter name project : '\n\
    read projectName \n\
    printf 'generating new project ...\n' \n\
    $(cp -r ~/../usr/lib/binary-builder/init ./) \n\
    $(mv init $projectName) \n\
    $(echo $projectName > $projectName/name-bin) \n\
    } \n\
initProject \n\
"

int builder() {
 system(SHELLSCRIPT);
}
