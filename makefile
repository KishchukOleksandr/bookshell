#-------------------------------------------------------------
VPATH = src/book:src/issue:obj
includes = -I"src/book" -I"src/issue"
objdir = obj
objects = $(addprefix $(objdir)/, bookshell.o issue.o book.o)
#-------------------------------------------------------------

all: ${objects}
	g++ -o bookshell ${objects}

${objects}: |  ${objdir}

${objdir}:
	mkdir ${objdir}

${objdir}/%.o: %.cpp
	g++ -c $< -o $@ ${includes}

.PHONY: clean
clean:
	rm obj/*.o bookshell
