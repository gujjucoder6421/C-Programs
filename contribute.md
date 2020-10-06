If you have a question or need any help...
Please use the mailing list instead of creating issues on the tracker. Thank you!

Reporting a bug
Create a new issue on the tracker.
The best way to report a bug is to create a failing test case. Please see the Contributing code section.
Proposing a new feature
It is a good idea to discuss your changes on the mailing list to get feedback from the community.
If you have a patch with unit tests, send a pull request. Please see the Contributing code section.
MyBatis Generator has a very powerful plugin mechanism that can be used to alter many aspects of the code generation process. It is our preference to limit new features in the base product to features that cannot be implemented easily with a plugin. In other words, please do not send pull requests or make feature requests for items that can be implemented with a plugin.
We also prefer to limit the number of plugins supplied with the generator and added to the code base. In most cases, plugins are very specific to an individual use case. If you feel that your plugin has wide potential use, feel free to promote it on the mailing list and you can add a description of your plugin on the Generator WIKI (https://github.com/mybatis/generator/wiki/Third-Party-Tools)
Improving documentation
Documentation is placed under src/site directory, so it is basically the same as creating a patch to contribute documentation changes. Please see the Contributing code section.
Contributing code
General Information

Copyright and License
You are the author of your contributions and will always be.
Everything you can find it this project is licensed under the Apache Software License 2.0
Every contribution you do must be licensed under the Apache Software License 2.0. Otherwise we will not be able to accept it.
Please make sure that all the new files you create hold the following header:
/*
 *    Copyright [year] the original author or authors.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
How to send your modifications as a pull request
The best way to submit a patch is to send a pull request.
Here are the steps of a typical workflow.

Fork the repository on GitHub.
Clone your fork to your local machine.
Create a topic branch with a descriptive name.
Make changes with unit tests in the topic branch.
Push commits to your fork on GitHub.
Send a pull request.
For steps 1 to 3, please read this GitHub help if you are not familiar with these operations.
Step 4 and 5 are basic git operations. Please see the online documentation for its usage.
