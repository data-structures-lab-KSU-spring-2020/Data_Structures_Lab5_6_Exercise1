##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=lab5_6_exercise1
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Travis/Documents/School/2020_Spring/Data_Structures_Lab/Data_Structures_Lab_Workspace/data_structures_lab
ProjectPath            :=C:/Users/Travis/Documents/School/2020_Spring/Data_Structures_Lab/Data_Structures_Lab_Workspace/data_structures_lab/lab5_6_exercise1
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Travis
Date                   :=25/02/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="lab5_6_exercise1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/sequence3.cpp$(ObjectSuffix) $(IntermediateDirectory)/sequence_exam3.cpp$(ObjectSuffix) $(IntermediateDirectory)/node1.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/sequence3.cpp$(ObjectSuffix): sequence3.cpp $(IntermediateDirectory)/sequence3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Travis/Documents/School/2020_Spring/Data_Structures_Lab/Data_Structures_Lab_Workspace/data_structures_lab/lab5_6_exercise1/sequence3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sequence3.cpp$(DependSuffix): sequence3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sequence3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sequence3.cpp$(DependSuffix) -MM sequence3.cpp

$(IntermediateDirectory)/sequence3.cpp$(PreprocessSuffix): sequence3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sequence3.cpp$(PreprocessSuffix) sequence3.cpp

$(IntermediateDirectory)/sequence_exam3.cpp$(ObjectSuffix): sequence_exam3.cpp $(IntermediateDirectory)/sequence_exam3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Travis/Documents/School/2020_Spring/Data_Structures_Lab/Data_Structures_Lab_Workspace/data_structures_lab/lab5_6_exercise1/sequence_exam3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence_exam3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sequence_exam3.cpp$(DependSuffix): sequence_exam3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sequence_exam3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sequence_exam3.cpp$(DependSuffix) -MM sequence_exam3.cpp

$(IntermediateDirectory)/sequence_exam3.cpp$(PreprocessSuffix): sequence_exam3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sequence_exam3.cpp$(PreprocessSuffix) sequence_exam3.cpp

$(IntermediateDirectory)/node1.cpp$(ObjectSuffix): node1.cpp $(IntermediateDirectory)/node1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Travis/Documents/School/2020_Spring/Data_Structures_Lab/Data_Structures_Lab_Workspace/data_structures_lab/lab5_6_exercise1/node1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/node1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/node1.cpp$(DependSuffix): node1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/node1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/node1.cpp$(DependSuffix) -MM node1.cpp

$(IntermediateDirectory)/node1.cpp$(PreprocessSuffix): node1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/node1.cpp$(PreprocessSuffix) node1.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


