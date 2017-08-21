ionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <ClCompile>
      <RuntimeLibrary>MultiThreaded</RuntimeLibrary>
      <InlineFunctionExpansion>OnlyExplicitInline</InlineFunctionExpansion>
      <StringPooling>true</StringPooling>
      <FunctionLevelLinking>true</FunctionLevelLinking>
      <Optimization>MaxSpeed</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32s.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
  