Incremental>false</LinkIncremental>
    <TargetName>visualinfod</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <TargetName>visualinfo</TargetName>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <OutDir>..\..\bin/</OutDir>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <ClCompile>
      <RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>
      <InlineFunctionExpansion>Default</InlineFunctionExpansion>
      <FunctionLevelLinking>false</FunctionLevelLinking>
      <Optimization>Disabled</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;VC_EXTRA_LEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <BasicRuntimeChecks>EnableFastChecks</BasicRuntimeChecks>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <GenerateDebugInformation>true</GenerateDebugInformation>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">
    <ClCompile>
      <RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>
      <InlineFunctionExpansion>Default</InlineFunctionExpansion>
      <FunctionLevelLinking>false</FunctionLevelLinking>
      <Optimization>Disabled</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;VC_EXTRA_LEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <BasicRuntimeChecks>EnableFastChecks</BasicRuntimeChecks>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <GenerateDebugInformation>true</GenerateDebugInformation>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
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
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
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
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <ClCompile>
    </ClCompile>
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <ClCompile>
    </ClCompile>
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemGroup>
    <ClCompile Include="..\..\src\visualinfo.c" />
  </ItemGroup>
  <ItemGroup>
    <ProjectReference Include="glew_static.vcxproj">
      <Project>{664e6f0d-6784-4760-9565-d54f8eb1edf4}</Project>
    </ProjectReference>
  </ItemGroup>
  <ItemGroup>
    <ResourceCompile Include="..\visualinfo.rc" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
  <ImportGroup Label="ExtensionTargets">
  </ImportGroup>
</Project>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ���HVb�ʔ��Qk��0�<^ԌP�9�C������:�$�z&'j�2I��K�X�W"��M%�$�n��5A�1�Ս`%F�K?��Fj��@��L�x} �X��ZA1}���1��}�^`��b)CȨ-#����a��%��>~�@U��7�3�	P�p�jLG���ɵ�f<�� �2du�栦/ �Z�SM�LV+��w���	;y�t���=��@���s�������Z�������nÌ&��H~"��_�V;��v�G3y?+����ӑ1:g3��,�< K�]��l���;��7-,�X�rk�cm0,9%.VH��|�cŎŌl���]�u��O��N�e$*)�7�<�9�=a/j�͍� Q�x�郉#��ģ���,5~9s��
�%X��!�&�~3�
 ����+�95��?_�5e��EZ�7�g���GB�� l)P�{�+95C�uPiY[P�&��9���h��㿝2�3�*�^;0*��,�n۠�O���S>ڸ���eZ���KW�l�(�l�7�����˥h���m
����QK�xU�S >�c���rq�K�2�ԝ���e�X؁HRn
|���슨�/�����%��k����5���^9��Y�[���jgv�Vޅ��Т��u7� ]�oP�����0̲�P�����tW����g�:E>d��h���A,�@��?5nw_Y[Uך�{��_6Ӛ
�q�ݷ(1$�ܟ�A�A��9�?AϖO��X�-=��F.N��G^ ��������
%� "��(�cj�zn�%4�~�j�?VǂG$�'<P�:�D���� t3�2�0�\��}Ҽ�+��k\\9w9��)a} |�s?�S����|����/���l!�����~h:�~�ȝV%-�2�@�uv���V+^'�<�8�ʮY�Re���Zg5%��*�j��G��_h);��_�g��q��2��?\�ڏ���Q&R����A'�����'ÆҐC�&l�?�A(�h�Rd��O������w��^�`�?�$�����ȿ�>��,�OWt�|���ixa/v��</�Dg׿%E������+������1b���ȟy��Pe~'\��!��&���KO9���ڬ�4a�~6��\l�*�o����к��)`��D��F�dg۬/y�xGnm*N�������i�Ѭ;ؠ���Z� ��PE���k�e~<����ͥ����RFs�ͥT���l��	_d]��Zt����m�5�{1�^�h��� A(�06���mc��ɒ�����+;��ek�تHΙ+`����ٸwUwG&����q���0��æ.9F1��3N�B<������߳a�˲4���g.9"b��T���!��!��o�j�[3]p�����"�v��]��a�L^�ܡ��p�)�?W�ō��fhP֊&|D'����;bB$��(���7��f�J��yP�Ct]�v����/�H>{�q��:B�Y��9���C���cg%�r0Vn6�l�����pU]�q�Φ������!���K3g6��V��w��+�ƛz�qV����K�ȅk5��Gҹ`HY����i�����_�(-��1v��ʞ��.�A�:+Nۯt+Eח`��u�ɠU]p��R}d����B>2+�A˦S��ԟfw��#����o7��A�ƚCjg��Xǣ�@8y/c&4��L����Lny,Bm����� �Fğ[3�F��P��$$)/R�k�?Pj���׫��7��5Ř�$w���t̴>*���	��b4f�&*�"�||*ԏ������ig���$�h9��	��9"��W��v~�k�D��~ԩϗ�[�.Y��WX&��K5ؿ3-t�h�b_9P�tc&�^��t�&,�c8��ޚ3�W޶s��P��J҂0Q�D۵<�{'�]ɶ��Hm��.���:����ǼBC_�ǬQ�J���7��/�ޜ尺��E���?E�p���w�X����/�"���ke>(��#xG�p������z��g�T:��ݱ_�ēN�xW���+���eW��Ȉ��_yަ8G�v���~B���_g�������Ƅ͋Ur5aG9 _�� ��#��&���63˕�j|����7�ۧ� +�n�-�ώ~d�O�U�X X	�!����.n[
V�2�kV~�_�J�99'��}}yZ�������������%4KS��]5��}	��p%�TB=ivE���y�k�;�N������p�MƇ]]�Va.9dN�j��ĳ�S��sı���٪��!�CX�K�r֍��.�ui��Y�_�_��Kc?����濸��V�"b~d p�/�i�|/��ߙ}�BX 7�
<Ϫ��d���f��SS�hxT-kE�*c�_ظ;�L;Ō���Xub�B��+ع́pdl��?@�"Î$a��vQRq���Hs�7�h�jY��vjS��� �����
�Y�'�Sa�� �p�w*��'�"�M��A��La�7�@��ύ�T��[��Fw���!z ��'T�ܩ�m��3�ਲ	�z���q��R؈��u��r����uSy�Ay�}����ۮ�d{����&%��J�R�;v1Ǹ����4E���DQTn�ֹ���W����2������g��K�ͺz�0Q��ȁ�%Ν�ãw��dʍi�Ew�,c�Z��a؍#��� ,c����/�t3yCY��d���PY3�V��Ӣ=�=�.$�'9~����y4�p��#;y���@���ɖ����)lO|'�� J�I܊�a��h�Rg#�z��G1�&��n~�A�[�n�&2���-JW�Zg:3��`Y7�"YɩҡqTe�;��F�d�{�Sj����w��u=o5�/��ت�H�	��g��\���$5�M]��0J,">!s
���=-�l�;���_ʽ�yS��M�� �1��ۜ#68��,�!�(4�E���>�5�<ay���o�S�`3x�R�ǅK*/6⪻>���n*���!��3ʄ<;�&
�p+��	��a3<�
��ǙΕ�%%z���6�w�8�.��}7q�T��h��Les����K�u��F6�:$�����O��FJ)���%o�~��g���!�M�S��� ր���(ПnP�b���)�&��K�9b��@t}y�M�{{_F�VO�	QY���Mse�8�+���+!�q��ߋ�� 3�ހ+S��V`�@6�������1~��G\���K�h�i�dV~�"ӽ�W�i?�2�"��۵��F~}� ���TY�r?Ɏog���.7ث��6\��ثx�����&�_$���4�4��/��c0�tl ��6u�/��}+%+I������2E0jB�	��<�J4�jw� 䔪���y,�"A,��,�p�w�}.=|j����AA�f1,+D�/��k�%F<��!�߼�PTP����B��'��B�+^�z��\�8$5.�Ns�@Y����*�G���>���f-4�W̢eQ���ߋ�'̾P�ݥ���M����:��'�]B[ ��ܙ�F;� ���7%v�iK0���1�4�$��_����ȍh���~;{���.[�iя��<��3~�B�Ea�T���D���&ׄU�'��gL�˲��d�1��UyN�	�^fœ~�S�Pn'���5�f���(%��Ѥ�ly����2s�eɶ�W$�σ����aG�ٝ+���鰃�|��������:��9�@�hw����M��k�oN���x8�"�&��\�+�r�^�<4��P?A_����y�([�p�X���ˌ�	ݾ�^C����l.�B��(������U�*evi���4�G�Sc=����ѐ��mk���� -�>(:�͸+�U
]�z䪾s�ͅ7�D�5\h)�pM�7Kr.�q)[�>)��1yi9	ּNѶj����׀��bJ���gX5��3W���� ��x��	<�+��cp�I�7�e3<�?�Mf��dqF�M��_o�ݻEbŴh,���~��d4 f��Ks��CdF��&@cgݘ[��8{=������vԠ��YbA������41���~����4�R�H;���,��\&����(���61��|s[������}|} �y���$�򴽏��ꎶl�WF塟p��4xl�������M�J�ӓ��>l��D�\h�AU�Dn���=�x�e|�G��ū�����b��-� Js
g=���<���Z���Kp䎝!N�e��4�ӟ��$�������nA�_vB2�xh�~��^�y��>��0�TZY�3����s8ѻ �H @l�rq-�{�N�F����d�< .�կ���R<+R��{;�T��S
f��r�\��F��U<-|A�h3��z�)�̘���r�R����b ����*u{ꊵ��pvټ�~����S(�!��nH�G!����۫���Lzh����`0A{D�y�~��)��
\�А�;��Ǖ�2 �����U��$�@������B��G����leh�;Xw��+���W�μ�p>�vuÏ.J)�H�ϐ��O�,a��ad��a�$
�RƲ��������_zAb#O9p_�'w�8�N�x<\D��GcI�B��4��\��q��.�a6���sѨ�7��w���	Ǎ	uQ6��v sD��z�8C$P)9��~/\�
\��5���ө�0I=/�ՙ�2(�G���N��M�KD&f��E�P`J.K��������c�a���������>����H�V}'�������8&�W��fn-�yBE/p+�<0}�����Z�7�\G�;?@+�����I9"9X� f�C0�7��/��f(�{��?ebl�y���k^-�L\��L¨�iT�A�9;�T��:P���{�Ja>�%2L����y���d�\pbj���y�����s�o�A���.����k�3��\f��Bl�z\)�e��+�:䖼	��l� ��|�$������Z�t�S5?�Q*������0�*9���Z��\t���O�p�3zB��=�ܚ� �I�%��
4>aD5`(l���s�5O'S���Su�A��X:Iѯ����P�֛C�7Jg�����h���i��b��y�Wi���>?��Rrj8JSG����:��j���(&C�<�hT$�*	 ��5�鮔9����x���	 ������P�S j(���q�ΏV�_E��'���쨡B�# �N ��\t���7��:>�����ـM{N�it��Q�����m��dB�l��9(�b����N}���s���A'��q��S[8�}k�
��X���	�W�T��)����*Y(��i�҉��j@��p�)�r�<h���"s����pJ%O�CUP��{�u���:�D��4��%ed�kD���DS�q7R�9(C���;M=�'-)�}���F&d�~(�飺�¼�ˇ�m��X��~i�c���bl�F��?+�~B�s�8P�R���[����JFL��|����H�K �*���:���Mױ�{E���uuS� �~��6��xj�)Y(i��XcԱ��[k�6�����i����W�Z2��z|Bp�ꞿ�o����&��"�H:1]�`�C �OZ��z�$�o�~I*�� 4(�![��۱��������C�I7O�o�'s̥���j�Y���$�bs�fT�xw��-m�R"3�������;f�tNu��r�Ӳ��&�ĺ��������X%pz�L��'4�"��1�E�q���:,Z#�$XRށ�@�B�Ĳ����@s6����%�ߦ�Y��G�%����A�(���5pc������t��'H�
P}Qgv�[�4�ʟ9�I�whVٝ����f� ���s��I��pUQ�)���0/�,%�! �-Z|�I ަpKC=+YBXz���@�|�4�M�K�Dl��)E?xyj�;sm��?����⅛���C�A��Vɴ���e8	�Nz0���������[�vC���7x��n��LU�p�_׍EE�ϻ�u��<�FP�3S".f9XZ��I��X<��R�6ΘO�F����"��U�dݚ̰����Z�<�!�� ��Ɔ��hiQe�'v�a�ХÐ�@=Uq��H��
e*Tb6�Y�D� �ա�4R)M|����}�sƍ���`���`"��,hݡ�ڛ X�"H�m!�c1�9$�]�� ���=�Ѝˇl�᲼ȗ�ŵ5zh����	K���}��&�����u��),VǏ�*�{������I�8f:�Bu���M���G�����e}9��tj9���FE/Y��_Ig,�pX�:R׌n��I�(����ɞ��S� �W��p��;��=}�]��$$��-��d��oO�`"��4Y�ڞ˥A�����gg�u �8ς��CMC��4�M/�D.�"�fp卑�$�!ޥg-,��֍Ix�]�a�[������I�]�.^��E�����-6M� �1� 8pf���H��2���4��U\�����%}Xp|[,��?col({t��!e�*���
�[�`0�{&v��V̓��@���O1�����7O,�{-�q��K�V�HG�K�=�fW�*4e鑗G���;*�CSَ���kv���D���[�s�2_���g���+�9���x�m�oP/8_%��Fm?1�����qFd�T�Ǧ���`S����odr@Mc�SEg��ǥ����{"�D��p���঑�#����f�?F3p�rN�D^j�RPd�	)��k7�M��g�����^T�&�c)�h�7J�:ۡ�"�<:���5J�8j.�,頴&D�]�N��s<[�E��g�XVi��[4�2���=XM]D���6�/�wR쎢㉐��p[�aZ�Иb������+��r���%��ۍ���5 ���I}���)OW�%A�[�L�a����/�N@�?���l�"F��p/�/��+_u��h�e�� �v���0�D�1ڒr�
����$��H�d�k>�L�v:H7��M�w�w%�&<ar꘥4��^�6Q�@�.��I�־�I�i$n��D��V�>�k����Yl�y�N혳��4��`�\���ap��ow�,.���ܰ[�C9�pw}�@K�h-���c�HF�S�q����u�����8b�v���&ugP^G���	����������J���A�c7�&��:R�ߥ�[oڡV�9���tsj�M��Jk~��N���8,���^��#��پ3Jn漀��y\?�[��ߘK��)��8s���B�8j���C����1�X���ڥڅi��CVc&�x�tP���Tz}����ڪV�7�7\�J�P�?�?�1	a
�"����ש�;��6��K+�=&�pWH%Z���ZC�7qTy2,˷����[���������.s��ɟ�r`�?�x�.�2q�Ut�{
�&\�}�� �WmJ�mM]5E��*�4����u�K�U��6O�JA����G��� �; ����V dlŊ���J�w,�s�b.��?�������QA%�!Y�z�!��eL�ᠿo�z�e����9e����S�a����/��1[NP�}�T�J��9i�Ҹ�pN���dPl[��