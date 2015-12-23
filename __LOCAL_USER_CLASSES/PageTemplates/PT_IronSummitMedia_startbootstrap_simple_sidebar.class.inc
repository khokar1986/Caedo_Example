<?

class PT_IronSummitMedia_startbootstrap_simple_sidebar extends BasePage {

	public function __construct(){
		parent::__construct(); // load all the parent classes first
		$this->__JavaScript("//cdnjs.cloudflare.com/ajax/libs/jquery-form-validator/2.1.47/jquery.form-validator.min.js", false, true);
	}

	protected function HEAD(){
		parent::HEAD();
		?>
<meta charset="utf-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="description" content="">
<meta name="author" content="">

<!-- Bootstrap Core CSS -->
<link href="/css/bootstrap.min.css" rel="stylesheet">

<!-- Custom CSS -->
<link href="/css/simple-sidebar.css" rel="stylesheet">


<style>
<!--
#TidyMessage {
	background-color: #808080;
}
-->
</style>

<!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
<!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
<!--[if lt IE 9]>
        <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
        <script src="https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js"></script>
    <![endif]-->
<?
	}

	public function __destruct(){
		parent::__destruct();
	}

	protected function BODY(){
		parent::BODY();
		
		?>
<div id="wrapper">
	<!-- <img alt="" src="/images/CAEDO_Logo.png" height=100> -->

	<!-- Sidebar -->
	<div id="sidebar-wrapper">
		<ul class="sidebar-nav">
			<li class="sidebar-brand"><a href="/">CAEDO Framework</a></li>
			<li><a href="/HelloWorld.php" target="_blank">Hello World</a></li>
			<li><a href="/HelloWorld_01.php">Hello World Learning Path</a></li>
			<li><a href="/TopicPages/BasicVersion.php">Basic Version</a></li>
			<li><a href="/TopicPages/Database.php">Database</a></li>
			<li><a href="#">About</a></li>
			<li><a href="#">Services</a></li>
			<li><a href="#">Contact</a></li>
		</ul>
	</div>
	<!-- /#sidebar-wrapper -->

	<!-- Page Content -->
	<div id="page-content-wrapper">
		<div class="container-fluid">
                        <?
	}

	protected function FOOTER(){
		parent::FOOTER();
		?>
		    </div>
	</div>

	<div class="row">
		<div class="col-lg-12"
			style='text-align: center; background-color: #989898; height: 72px;'>
			<br /> Template Credit: <a
				href='https://github.com/IronSummitMedia/startbootstrap-simple-sidebar'>
				https://github.com/IronSummitMedia/startbootstrap-simple-sidebar</a>

		</div>
	</div>

	<!-- /#page-content-wrapper -->
<?php if($this->__TidyHTMLComment){?>
	<div class="row">
		<div class="col-lg-12">
			<div id='TidyMessage'> 
				<?php print $this->__TidyHTMLComment; ?>
				</div>
		</div>
	</div>

<?php } ?>
<!-- end: main container -->
</div>
<?
	}

}