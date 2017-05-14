#include<conio.h>
#include<iostream.h>
#include<math.h>
int main()
{
clrscr();
char *single_digit[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
char *double_digit[]={"Ten","Eleven","Twelve","Thirteen","Forteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
char *ten_multiple[]={"Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
char *ten_power[]={"","Hundred","Thousand","Lakh","Crore","Arab","Kharab"};
long long int number,temp,len=0,maxPower,i=1,rem;
cout<<" Enter any Number ";
cin>>number;
temp=number;
	while(temp!=0)
	{
	temp/=10;
	len++;
	}

	if(len==1)
	{
	cout<<*(&single_digit[number-1]);
	}
		if(len==2)
		{
		if(number<=19)
		{
		cout<<*(&double_digit[number-10]);
		}
		else
		{
		maxPower=pow(10,len-i);
		rem=number/maxPower;
		cout<<" "<<*(&ten_multiple[rem-2])<<" ";
		number%=maxPower;
		if(number==0)
		{
		cout<<" ";
		}
		else
		{
		cout<<" "<<*(&single_digit[number-1]);
		i++;
		}
		}
		}
			if(len==3)
			{
			maxPower=pow(10,len-i);
			rem=number/maxPower;
			cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
			number%=maxPower;
			i++;
				if(number==0)
				{
				cout<<" ";
				}
				else if(number<=9)
				{
				cout<<" "<<*(&single_digit[number-1]);
				}
				else if(number>=10&&number<=19)
				{
				cout<<" "<<*(&double_digit[number-10]);
				}
				else
				{
				maxPower=pow(10,len-i);
				rem=number/maxPower;
				cout<<" "<<*(&ten_multiple[rem-2])<<" ";
				number%=maxPower;
				cout<<" "<<*(&single_digit[number-1]);
				i++;
				}
			}

if(len==4||len==5)
{
	if(len==4)
	{
	maxPower=pow(10,len-i);
	rem=number/maxPower;
	cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
	}
	else if(len==5)
	{
	maxPower=pow(10,len-i-1);
	rem=number/maxPower;
		if(rem<=19)
		{
		cout<<" "<<*(&double_digit[rem-10])<<" "<<*(&ten_power[2]);
		}
		else if(rem>=20&&rem<=99)
		{
		temp=rem/10;
		rem%=10;
		cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
		}
	}
	number%=maxPower;
	i++;
	if(number==0)
	{
	cout<<" ";
	}
		else if(number<=9)
		{
		cout<<" "<<*(&single_digit[number-1]);
		}
			else if(number>=10&&number<=19)
			{
			cout<<" "<<*(&double_digit[number-10]);
			}
			   else if(number>=20&&number<=99)
			    {
			    if(number%10==0)
			    {
			    rem=number/10;
			    cout<<" "<<*(&ten_multiple[rem-2]);
			    }
			    else
			    {
			    temp=number/10;
			    cout<<" "<<*(&ten_multiple[temp-2]);
			    number%=10;
			    cout<<" "<<*(&single_digit[number-1]);
			    }
			    }
				else if(number>=100&&number<=999)
				{
				  rem=number/100;
				  cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
				  number%=100;
					if(number==0)
					{
					cout<<" ";
					}
					else if(number<=9)
					{
					cout<<" "<<*(&single_digit[number-1]);
					}
					else if(number>=10&&number<=19)
					{
					cout<<" "<<*(&double_digit[number-10]);
					}
					else if(number>=20&number<=99)
					{
						if(number%10==0)
						{
						temp=number/10;
						cout<<" "<<*(&double_digit[temp-10]);
						}
						else
						{
						temp=number/10;
						number%=10;
						cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
						}
					}

				}
}

if(len==6||len==7)
{
	if(len==6)
	{
	maxPower=pow(10,len-i);
	rem=number/maxPower;
	cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[3]);
	}
	else if(len==7)
	{
	maxPower=pow(10,len-i-1);
	rem=number/maxPower;
		if(rem>=10&&rem<=19)
		{
		cout<<" "<<*(&double_digit[rem-10])<<" "<<*(&ten_power[3]);
		}
		else if(rem>=20&&rem<=99)
		{
			if (rem%10==0)
			{
			temp=rem/10;
			cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&ten_power[3]);
			}
			else
			{
			temp=rem/10;
			rem%=10;
			cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[3]);
			}
		}
	}
	number%=maxPower;
	if(number==0)
	{
	cout<<" ";
	}
		else if(number<=9)
		{
		cout<<" "<<*(&single_digit[number-1]);
		}
			else if(number>=10&&number<=19)
			{
			cout<<" "<<*(&double_digit[number-10]);
			}
			else if(number>=20&&number<=99)
			{
				if(number%10==0)
				{
				temp=number/10;
				cout<<" "<<*(&ten_multiple[temp-2]);
				}
				else
				{
				temp=number/10;
				number%=10;
				cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
				}
			}
				else if(number>=100&&number<=999)
				{
					rem=number/100;
					cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
					number%=100;
						if(number==0)
						{
						cout<<" ";
						}
						else if(number<=9)
						{
						cout<<" "<<*(&single_digit[number-1]);
						}
						else if(number>=10&&number<=19)
						{
						cout<<" "<<*(&double_digit[number-10]);
						}
						else if(number>=20&number<=99)
						{
						if(number%10==0)
						{
						temp=number/10;
						cout<<" "<<*(&double_digit[temp-10]);
						}
						else
						{
						temp=number/10;
						number%=10;
						cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
						}
					}


				}
						else if(number>=1000&&number<=9999)
						{
						    if(number%1000==0)
						    {
						    rem=number/1000;
						    cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
						    }
						    else
						    {
						      rem=number/1000;
						      cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
						      number%=1000;
							    if(number==0)
							    {
							    cout<<" ";
							    }
							    else if(number<=9)
							    {
							    cout<<" "<<*(&single_digit[number-1]);
							    }
							    else if(number>=10&&number<=19)
								{
							    cout<<" "<<*(&double_digit[number-10]);
								}
								else if(number>=20&number<=99)
								{
								if(number%10==0)
								{
								temp=number/10;
								cout<<" "<<*(&double_digit[temp-10]);
								}
								else
								{
								temp=number/10;
								number%=10;
								cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
								}
								}
								else if(number>=100&&number<=999)
								{
									rem=number/100;
									cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
									number%=100;
									if(number==0)
									{
									cout<<" ";
									}
									else if(number<=9)
									{
									cout<<" "<<*(&single_digit[number-1]);
									}
									else if(number>=10&&number<=19)
									{
									cout<<" "<<*(&double_digit[number-10]);
									}
									else if(number>=20&number<=99)
									{
									if(number%10==0)
									{
									temp=number/10;
									cout<<" "<<*(&double_digit[temp-10]);
									}
									else
									{
									temp=number/10;
									number%=10;
									cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
									}
									}

								}
						    }
						}

								else if(number>=10000&&number<=99999)
								{
								      if(number>=10000&&number<=19999)
								      {
									rem=number/1000;

									if(rem>=10&&rem<=19)
									{
									cout<<" "<<*(&double_digit[rem-10])<<" "<<*(&ten_power[2]);
									}
									number%=1000;

								      }
								   else if(number%10000==0)
								    {
								    rem=number/10000;
								    cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&ten_power[2]);
								    }
								    else
								    {
								    rem=number/10000;
								    number%=10000;
								    temp=number/1000;
								    cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[temp-1])<<" "<<*(&ten_power[2]);
								    number%=1000;
								    }

									if(number==0)
									{
									cout<<" ";
									}
									    else if(number<=9)
									    {
									    cout<<" "<<*(&single_digit[number-1]);
									    }
										else if(number>=10&&number<=19)
										{
										cout<<" "<<*(&double_digit[number-10]);
										}
											else if(number>=20&&number<=99)
											{
												if(number%10==0)
												{
												rem=number/10;
												cout<<" "<<*(&ten_multiple[rem-2]);
												}
												else
												{
												rem=number/10;
												number%=10;
												cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[number-1]);
												}
											}
												else if(number>=100&&number<=999)
												{
													rem=number/100;
													cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
													number%=100;
													if(number==0)
													{
													cout<<" ";
													}
													else if(number<=9)
													{
													cout<<" "<<*(&single_digit[number-1]);
													}
													else if(number>=10&&number<=19)
													{
													cout<<" "<<*(&double_digit[number-10]);
													}
													else if(number>=20&number<=99)
													{
														if(number%10==0)
														{
														temp=number/10;
														cout<<" "<<*(&double_digit[temp-10]);
														}
														else
														{
														temp=number/10;
														number%=10;
														cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
														}
													}


												}
								}

}

if(len==8||len==9)
{
	if(len==8)
	{
	maxPower=pow(10,len-i);
	rem=number/maxPower;
	cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[4]);
	}
	else if(len==9)
	{
	maxPower=pow(10,len-i-1);
	rem=number/maxPower;
		if(rem>=10&&rem<=19)
		{
		cout<<" "<<*(&double_digit[rem-10])<<" "<<*(&ten_power[4]);
		}
		else if(rem>=20&&rem<=99)
		{
			if(rem%10==0)
			{
			temp=rem/10;
			cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&ten_power[4]);
			}
			else
			{
			temp=rem/10;
			rem%=10;
			cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[4]);
			}
		}
	}
	number%=maxPower;
	if(number==0)
	{
	cout<<" ";
	}
		else if(number<=9)
		{
		cout<<" "<<*(&single_digit[number-1]);
		}
			else if(number>=10&&number<=19)
			{
			cout<<" "<<*(&double_digit[number-10]);
			}
				else if(number>=20&&number<=99)
				{
				       if(number%10==0)
				       {
				       rem=number/10;
				       cout<<" "<<*(&ten_multiple[rem-2]);
				       }
				       else
				       {
				       rem=number/10;
				       number%=10;
				       cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[number-1]);
				       }
				}
					else if(number>=100&&number<=999)
					{
					    rem=number/100;
					    cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
					    number%=100;
						if(number==0)
						{
						cout<<" ";
						}
							else if(number<=9)
							{
							cout<<" "<<*(&single_digit[number-1]);
							}
								else if(number>=10&&number<=19)
								{
								cout<<" "<<*(&double_digit[number-10]);
								}
									else if(number>=20&&number<=99)
									{
										if(number%10==0)
										{
										rem=number/10;
										cout<<" "<<*(&ten_multiple[rem-2]);
										}
										else
										{
										rem=number/10;
										number%=10;
										cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[number-1]);
										}
									}
					}
						else if(number>=1000&&number<=9999)
						{
						    if(number%1000==0)
						    {
						    rem=number/1000;
						    cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
						    }
						    else
						    {
						      rem=number/1000;
						      cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
						      number%=1000;
							    if(number==0)
							    {
							    cout<<" ";
							    }
							    else if(number<=9)
							    {
							    cout<<" "<<*(&single_digit[number-1]);
							    }
							    else if(number>=10&&number<=19)
								{
							    cout<<" "<<*(&double_digit[number-10]);
								}
								else if(number>=20&number<=99)
								{
								if(number%10==0)
								{
								temp=number/10;
								cout<<" "<<*(&double_digit[temp-10]);
								}
								else
								{
								temp=number/10;
								number%=10;
								cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
								}
								}
								else if(number>=100&&number<=999)
								{
									rem=number/100;
									cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
									number%=100;
									if(number==0)
									{
									cout<<" ";
									}
									else if(number<=9)
									{
									cout<<" "<<*(&single_digit[number-1]);
									}
									else if(number>=10&&number<=19)
									{
									cout<<" "<<*(&double_digit[number-10]);
									}
									else if(number>=20&number<=99)
									{
									if(number%10==0)
									{
									temp=number/10;
									cout<<" "<<*(&double_digit[temp-10]);
									}
									else
									{
									temp=number/10;
									number%=10;
									cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
									}
									}

								}
						   }
						}
							else if(number>=10000&&number<=99999)
							{
								      if(number>=10000&&number<=19999)
								      {
									rem=number/1000;

									if(rem>=10&&rem<=19)
									{
									cout<<" "<<*(&double_digit[rem-10])<<" "<<*(&ten_power[2]);
									}
									number%=1000;

								      }
								   else if(number%10000==0)
								    {
								    rem=number/10000;
								    cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&ten_power[2]);
								    }
								    else
								    {
								    rem=number/10000;
								    number%=10000;
								    temp=number/1000;
								    cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[temp-1])<<" "<<*(&ten_power[2]);
								    number%=1000;
								    }

									if(number==0)
									{
									cout<<" ";
									}
									    else if(number<=9)
									    {
									    cout<<" "<<*(&single_digit[number-1]);
									    }
										else if(number>=10&&number<=19)
										{
										cout<<" "<<*(&double_digit[number-10]);
										}
											else if(number>=20&&number<=99)
											{
												if(number%10==0)
												{
												rem=number/10;
												cout<<" "<<*(&ten_multiple[rem-2]);
												}
												else
												{
												rem=number/10;
												number%=10;
												cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[number-1]);
												}
											}
												else if(number>=100&&number<=999)
												{
													rem=number/100;
													cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
													number%=100;
													if(number==0)
													{
													cout<<" ";
													}
													else if(number<=9)
													{
													cout<<" "<<*(&single_digit[number-1]);
													}
													else if(number>=10&&number<=19)
													{
													cout<<" "<<*(&double_digit[number-10]);
													}
													else if(number>=20&number<=99)
													{
														if(number%10==0)
														{
														temp=number/10;
														cout<<" "<<*(&double_digit[temp-10]);
														}
														else
														{
														temp=number/10;
														number%=10;
														cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
														}
													}


												}


							}

								else if(number>=100000&&number<=9999999)
								{
									if(number>=100000&&number<=999999)
									{
									rem=number/100000;
									cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[3]);
									}
									else if(number>=1000000&&number<=1999999)
									{
									rem=number/100000;
									cout<<" "<<*(&double_digit[rem-10])<<" "<<*(&ten_power[3]);
									}
									else if(number>=2000000&&number<=9999999)
									{
										rem=number/100000;
										if(rem>=20&&rem<=99)
										{
											if(rem%10==0)
											{
											   temp=rem/10;
											   cout<<" "<<*(&ten_multiple[temp-2]);
											}
											else
											{
											   temp=rem/10;
											   rem%=10;
											   cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[rem-1]);
											}
										}
										cout<<" "<<*(&ten_power[3]);
									}
									number%=100000;
										if(number==0)
										{
										cout<<" ";
										}
											else if(number<=9)
											{
											cout<<" "<<*(&single_digit[number-1]);
											}
												else if(number>=10&&number<=19)
												{
												cout<<" "<<*(&double_digit[number-10]);
												}
													else if(number>=20&&number<=99)
													{
														if(number%10==0)
														{
														rem=number/10;
														cout<<" "<<*(&ten_multiple[rem-2]);
														}
														else
														{
														rem=number/10;
														number%=10;
														cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[number-1]);
														}
													}
														else if(number>=100&&number<=999)
														{
														rem=number/100;
														cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
														number%=100;
														if(number==0)
														{
														cout<<" ";
														}
														else if(number<=9)
														{
														cout<<" "<<*(&single_digit[number-1]);
														}
														else if(number>=10&&number<=19)
														{
														cout<<" "<<*(&double_digit[number-10]);
														}
														else if(number>=20&number<=99)
														{
															if(number%10==0)
															{
															temp=number/10;
															cout<<" "<<*(&double_digit[temp-10]);
															}
															else
															{
															temp=number/10;
															number%=10;
															cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
															}
														}


														}
															else if(number>=1000&&number<=9999)
															{
																if(number%1000==0)
																{
																rem=number/1000;
																cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
																number%=1000;
																}


																else
																{
																rem=number/1000;
																cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[2]);
																number%=1000;
																	if(number==0)
																	{
																	cout<<" ";
																	}
																		else if(number<=9)
																		{
																		cout<<" "<<*(&single_digit[number-1]);
																		}
																			else if(number>=10&&number<=19)
																			{
																			cout<<" "<<*(&double_digit[number-10]);
																			}
																				else if(number>=20&number<=99)
																				{
																					if(number%10==0)
																					{
																					temp=number/10;
																					cout<<" "<<*(&double_digit[temp-10]);
																					}
																					else
																					{
																					temp=number/10;
																					number%=10;
																					cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
																					}
																				}
																	else if(number>=100&&number<=999)
																	{
																	rem=number/100;
																	cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
																	number%=100;
																		if(number==0)
																		{
																		cout<<" ";
																		}
																		else if(number<=9)
																		{
																		cout<<" "<<*(&single_digit[number-1]);
																		}
																		else if(number>=10&&number<=19)
																		{
																		cout<<" "<<*(&double_digit[number-10]);
																		}
																		else if(number>=20&number<=99)
																		{
																			if(number%10==0)
																			{
																			temp=number/10;
																			cout<<" "<<*(&double_digit[temp-10]);
																			}
																			else
																			{
																			temp=number/10;
																			number%=10;
																			cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
																			}
																		}

																	}
															}
															}
																else if(number>=10000&&number<=99999)
																{
																	   if(number>=10000&&number<=19999)
																	   {
																		rem=number/1000;

																		if(rem>=10&&rem<=19)
																		{
																		cout<<" "<<*(&double_digit[rem-10])<<" "<<*(&ten_power[2]);
																		}
																		number%=1000;

																	   }
																		else if(number%10000==0)
																		{
																		rem=number/10000;
																		cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&ten_power[2]);
																		}
																			else
																			{
																			rem=number/10000;
																			number%=10000;
																			temp=number/1000;
																			cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[temp-1])<<" "<<*(&ten_power[2]);
																			number%=1000;
																			}

																				if(number==0)
																				{
																				cout<<" ";
																				}
																					else if(number<=9)
																					{
																					cout<<" "<<*(&single_digit[number-1]);
																					}
																						else if(number>=10&&number<=19)
																						{
																						cout<<" "<<*(&double_digit[number-10]);
																						}
																							else if(number>=20&&number<=99)
																							{
																								if(number%10==0)
																								{
																								rem=number/10;
																								cout<<" "<<*(&ten_multiple[rem-2]);
																								}
																								else
																								{
																								rem=number/10;
																								number%=10;
																								cout<<" "<<*(&ten_multiple[rem-2])<<" "<<*(&single_digit[number-1]);
																								}
																							}
																								else if(number>=100&&number<=999)
																								{
																								rem=number/100;
																								cout<<" "<<*(&single_digit[rem-1])<<" "<<*(&ten_power[1]);
																								number%=100;
																									if(number==0)
																									{
																									cout<<" ";
																									}
																										else if(number<=9)
																										{
																										cout<<" "<<*(&single_digit[number-1]);
																										}
																											else if(number>=10&&number<=19)
																											{
																											cout<<" "<<*(&double_digit[number-10]);
																											}
																												else if(number>=20&number<=99)
																												{
																													if(number%10==0)
																													{
																													temp=number/10;
																													cout<<" "<<*(&double_digit[temp-10]);
																													}
																													else
																													{
																													temp=number/10;
																													number%=10;
																													cout<<" "<<*(&ten_multiple[temp-2])<<" "<<*(&single_digit[number-1]);
																													}
																												}


																								}


																}
								}
}

getch();
return 0;
}