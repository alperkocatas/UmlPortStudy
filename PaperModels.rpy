I-Logix-RPY-Archive version 8.10.0 C++ 6930133
{ IProject 
	- _id = GUID a91a0154-db94-4c19-8ef2-766c8db9294b;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 1;
			- value = 
			{ IPropertySubject 
				- _Name = "CPP_CG";
				- Metaclasses = { IRPYRawContainer 
					- size = 3;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Class";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "Simplify";
								- _Value = "ByUserPostDefault";
								- _Type = Enum;
								- _ExtraTypeInfo = "None,Default,ByUser,ByUserPostDefault";
							}
						}
					}
					{ IPropertyMetaclass 
						- _Name = "Link";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "Simplify";
								- _Value = "ByUserPostDefault";
								- _Type = Enum;
								- _ExtraTypeInfo = "None,Default,ByUser,ByUserPostDefault";
							}
						}
					}
					{ IPropertyMetaclass 
						- _Name = "Port";
						- Properties = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IProperty 
								- _Name = "Generate";
								- _Value = "False";
								- _Type = Bool;
							}
							{ IProperty 
								- _Name = "GenerateWithNullCheck";
								- _Value = "False";
								- _Type = Bool;
							}
						}
					}
				}
			}
		}
	}
	- _name = "PaperModels";
	- _modifiedTimeWeak = 5.1.2015::20:13:32;
	- _lastID = 7;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "SampleModel.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "SampleModel";
		- _id = GUID 67a539e1-6764-45af-ba48-176c09b47a5d;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "SampleModelCmp.cmp";
		- _subsystem = "SampleModel";
		- _class = "";
		- _name = "SampleModelCmp";
		- _id = GUID 9ab005cf-8bc9-4dfd-a52f-39332136db6d;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = 9;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 5;
		- value = 
		{ ISubsystem 
			- fileName = "SampleModel";
			- _id = GUID 67a539e1-6764-45af-ba48-176c09b47a5d;
		}
		{ IProfile 
			- fileName = "PortSimplifierProfile";
			- _persistAs = "D:\\Documents\\rhapsody_projects\\PaperModels\\PaperModels_rpy";
			- _id = GUID de8279ce-08f5-4bc2-9ff0-e23e68f8b97a;
			- _isReference = 1;
		}
		{ ISubsystem 
			- fileName = "SimpleModel";
			- _id = GUID ed21212f-b1cf-4d17-9082-e09ee03a76f3;
		}
		{ ISubsystem 
			- fileName = "DisconnectedPorts";
			- _id = GUID 37d8cbfa-0bb6-4e37-8e7b-f5359e6ee883;
		}
		{ ISubsystem 
			- fileName = "PortWithMultipleDests";
			- _id = GUID d865bef0-0eb8-46ae-a95c-ad09b040992d;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID 961e1d27-4d70-4f4f-aab5-f55e21a4e6f3;
		}
	}
}

