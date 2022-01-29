#Compiler and Linker
CC			:=	gcc

#The Target Binary Program
TARGET		:=	Sully
DEBUGOUT	:=	debug.out

#The Directories, Source, Includes, Objects, Binary and Resources
SRCDIR		:=	src
INCDIR		:=	inc
OBJDIR		:=	obj
TARGETDIR	:=	bin
SRCEXT		:=	c
HDEXT		:=	h
OBJEXT		:=	o
LIBDIR		:=	
ARG			:=	

#Flags, Libraries and Includes
CFLAGS		:=	-Wall -Wextra
DEBUGFLAG	:=	-Wall -Wextra -fsanitize=address
LIB			:=	
INC			:=	
SPECIALLIB	:=	

#---------------------------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#---------------------------------------------------------------------------------
HEADERS		:=	
SOURCES		:=	$(shell ls $(SRCDIR)/*.$(SRCEXT))
OBJECTS		:=	$(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

#Defauilt Make
all:	directories $(TARGETDIR)/$(TARGET)

#Remake
re:	fclean all

#Make the Directories
directories:
	@mkdir -p $(TARGETDIR)
	@mkdir -p $(OBJDIR)

#Clean only Objecst
clean:
	@$(RM) -rf $(OBJDIR)

#Full Clean, Objects and Binaries
fclean:	clean
	@$(RM) -rf $(TARGETDIR)
	@$(RM) -rf Sully_*

test:	directories $(OBJECTS)
	$(CC) $(INC) $(SPECIALLIB) -o $(TARGETDIR)/$(TARGET) $(OBJECTS) $(LIB)
	@clear
	@./$(TARGETDIR)/$(TARGET)
	@printf "All files:\n"
	@ls | grep Sully
	@printf "Content of all files:\n"
	@cat Sully_*

#Link
$(TARGETDIR)/$(TARGET): $(OBJECTS)
	$(CC) $(INC) $(SPECIALLIB) -o $(TARGETDIR)/$(TARGET) $^ $(LIB)

#Compile
$(OBJDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT) $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

#Non-File Targets
.PHONY: all re directories clean fclean test