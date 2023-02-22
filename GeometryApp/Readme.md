# Environment
INSTALLDIR: define this variable for the directory where the libraries and headers are installed

$INSTALLDIR/lib: lib directory

$INSTALLDIR/include: header directory

# Execution
if $INSTALLDIR is custom, define LD_LIBRARY

export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${INSTALLDIR}/lib